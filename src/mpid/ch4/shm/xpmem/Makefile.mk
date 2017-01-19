if BUILD_SHM_XPMEM

mpi_core_sources += src/mpid/ch4/shm/xpmem/globals.c    \
                    src/mpid/ch4/shm/xpmem/func_table.c
# errnames_txt_files += src/mpid/ch4/shm/xpmem/errnames.txt

endif
