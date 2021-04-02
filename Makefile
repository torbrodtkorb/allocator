top      = $(shell pwd)
builddir = $(top)/build
target   = $(builddir)/allocator

source += source/main.c
source += source/allocator.c

header += include/types.h
header += include/allocator.h

all: $(source) $(header)
	@mkdir -p $(dir $(target))
	@$(CC) -Iinclude $(source) -o $(target)
	@$(target)
