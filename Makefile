all: somebar

somebar: src/config.hpp
	meson setup build
	ninja -C build

src/config.hpp:
	cp src/config.def.hpp $@

install:
	sudo ninja -C build install
