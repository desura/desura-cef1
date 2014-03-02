#!/bin/sh
#Requires: GYP, ...
echo '\033[1;32mMake sure you got every cef dependencies installed.\033[0m'

PREFIX="install"
DOWNLOAD_URL="https://s3-us-west-2.amazonaws.com/lecs.desura.lindenlab.com/"
CHROMIUM_NAME="chromium-15.0.876.0.tar.bz2"
CHROMIUM_MD5="22c8e1db4d1c4b474c600dffbb5fdd0c"
DEPOT_NAME="depot_tools-r1.zip"
DEPOT_MD5="a27266b8d2388c4dc51645d1159dd0de"
GYP_GENERATORS='ninja'

clean() {
	rm -rf build_cef
	rm -rf install
	echo '\033[1;32mcleaned\033[0m'
}

build_cef() {
	if [ ! -d "build_cef" ]; then
		mkdir build_cef
	fi
	cd build_cef
	wget "$DOWNLOAD_URL""$DEPOT_NAME"
	#Check MD5
	unzip "$DEPOT_NAME" -d depot_tools
	PATH="$PATH":"$PWD"/depot_tools
	chmod +x depot_tools/ninja
	chmod +x depot_tools/ninja-linux64
	echo "\033[1;32mdepot_tools ready\033[0m"
	
	wget "$DOWNLOAD_URL""$CHROMIUM_NAME"
	#Check MD5
	tar xjvf "$CHROMIUM_NAME"
	echo "\033[1;32mchromium source ready\033[0m"
	
	mv "$CHROMIUM_NAME" back_"$CHROMIUM_NAME"
	mv chromium-* src
	mkdir src/cef
	rsync -av --progress .. src/cef --exclude build_cef
	cd src/cef
	sh cef_create_projects.sh
	cd ..
	ninja -C out/Debug cefclient cef_unittests
	echo '\033[1;32mBuilding CEF completed\033[0m'
}

if [ -z "$1" ]; then
	clean
	build_cef || exit 2
elif [ "$1" = "clean" ]; then
	shift
	clean
elif [ "$1" = "help" ]; then
	echo 'This script will allow you to easy compile Desura on Linux.'
	echo 'Type "./build_cef1.sh clean" to remove build files.'
	echo 'Type "./build_cef1.sh" to build libcef_desura.so client.'
	echo 'Type "./build_cef1.sh help" to display this message.'
	echo 'Any additonal shell argument will be given to "make" command.\n'
fi

echo '\033[1;32mCopy ./install/libcef_desura.so to your Desura "lib" folder!\033[0m'
