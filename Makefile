#############################################################################
# Makefile for building: TryCpp
# Generated by qmake (2.01a) (Qt 4.8.1) on: ?? ?? 25 01:09:24 2014
# Project:  TryCpp.pro
# Template: app
# Command: d:\qtsdk\desktop\qt\4.8.1\mingw\bin\qmake.exe -spec d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile TryCpp.pro
#############################################################################

first: debug
install: debug-install
uninstall: debug-uninstall
MAKEFILE      = Makefile
QMAKE         = d:\qtsdk\desktop\qt\4.8.1\mingw\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		debug \
		release

debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: TryCpp.pro  d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/win32-g++/qmake.conf d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/qconfig.pri \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/modules/qt_webkit_version.pri \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/qt_functions.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/qt_config.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/exclusive_builds.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/default_pre.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/default_pre.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/debug.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/debug_and_release.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/default_post.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/default_post.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/console.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/declarative_debug.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/rtti.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/exceptions.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/stl.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/shared.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/warn_on.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/win32/thread_off.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/resources.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/uic.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/yacc.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/lex.prf \
		d:/QtSDK/Desktop/Qt/4.8.1/mingw/mkspecs/features/include_source_dir.prf
	$(QMAKE) -spec d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile TryCpp.pro
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\qconfig.pri:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\modules\qt_webkit_version.pri:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\qt_functions.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\qt_config.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\exclusive_builds.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\default_pre.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\default_pre.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\debug.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\debug_and_release.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\default_post.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\default_post.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\console.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\declarative_debug.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\rtti.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\exceptions.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\stl.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\shared.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\warn_on.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\win32\thread_off.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\resources.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\uic.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\yacc.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\lex.prf:
d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\features\include_source_dir.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -spec d:\QtSDK\Desktop\Qt\4.8.1\mingw\mkspecs\win32-g++ CONFIG+=declarative_debug -o Makefile TryCpp.pro

qmake_all: FORCE

make_default: debug-make_default release-make_default FORCE
make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
