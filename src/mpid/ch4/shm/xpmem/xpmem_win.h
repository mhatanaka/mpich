/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2016 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef XPMEM_WIN_H_INCLUDED
#define XPMEM_WIN_H_INCLUDED

#include "xpmem_impl.h"

static inline int MPIDI_XPMEM_i_foo(MPIR_Comm * comm_ptr);

static inline int MPIDI_SHM_mpi_win_set_info(MPIR_Win * win, MPIR_Info * info)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_SET_INFO);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_SET_INFO);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_SET_INFO);
    return MPI_SUCCESS;
}


static inline int MPIDI_SHM_mpi_win_start(MPIR_Group * group, int assert, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_START);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_START);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_START);
    return MPI_SUCCESS;
}


static inline int MPIDI_SHM_mpi_win_complete(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_COMPLETE);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_COMPLETE);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_COMPLETE);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_post(MPIR_Group * group, int assert, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_POST);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_POST);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_POST);
    return MPI_SUCCESS;
}


static inline int MPIDI_SHM_mpi_win_wait(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_WAIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_WAIT);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_WAIT);
    return MPI_SUCCESS;
}


static inline int MPIDI_SHM_mpi_win_test(MPIR_Win * win, int *flag)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_TEST);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_TEST);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_TEST);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_lock(int lock_type, int rank, int assert, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK);
    return MPI_SUCCESS;
}


static inline int MPIDI_SHM_mpi_win_unlock(int rank, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_get_info(MPIR_Win * win, MPIR_Info ** info_p_p)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_GET_INFO);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_GET_INFO);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_GET_INFO);
    return MPI_SUCCESS;
}


#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_win_free)
static inline int MPIDI_SHM_mpi_win_free(MPIR_Win ** win_ptr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FREE);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FREE);

    /* win_ptr->dev.ch4.xpmem ?? see mpidpre.h */

    mpi_errno = MPIDI_NM_mpi_win_free(win_ptr);
    if (mpi_errno != MPI_SUCCESS)
        goto fn_fail;

  fn_exit:
    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FREE);
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

static inline int MPIDI_SHM_mpi_win_fence(int assert, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FENCE);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FENCE);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FENCE);
    return MPI_SUCCESS;
}

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_win_create)
static inline int MPIDI_SHM_mpi_win_create(void *base,
                                           MPI_Aint length,
                                           int disp_unit,
                                           MPIR_Info * info, MPIR_Comm * comm_ptr,
                                           MPIR_Win ** win_ptr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE);

    printf("\t%s():%s:%d\n", __FUNCTION__, __FILE__, __LINE__); fflush(stdout);
#ifdef	NOTYET_XPMEM
    {
	int ret;
	void *sptr;
	size_t ssiz;
	xpmem_segid_t s_id;

	sptr = base;
	ssiz = length * disp_unit;

	{
	    int prot, flag, fd;
	    void *addr;
	    size_t leng;

	    addr = base;
	    leng = ssiz;
	    prot = PROT_READ | PROT_WRITE;
	    flag = MAP_SHARED | MAP_ANONYMOUS | 0;
	    fd   = -1;

	    sptr = mmap(addr, leng, prot, flag, fd, 0 /* offs */ );
	    if (sptr == 0) {
printf("\tERROR %s():%s:%d\n", __FUNCTION__, __FILE__, __LINE__); fflush(stdout);
		mpi_errno = MPI_ERR_OTHER;
		goto fn_fail;
	    }
	}

	s_id = xpmem_make(sptr, ssiz, XPMEM_PERMIT_MODE, (void *)0666);
        if (s_id == -1) {
	    int save_errno = errno;
printf("\tERROR %s():%s:%d\n", __FUNCTION__, __FILE__, __LINE__); fflush(stdout);
printf("\tERROR %d\n", save_errno);
	    mpi_errno = MPI_ERR_OTHER;
	    goto fn_fail;
	}
	ret = xpmem_remove(s_id);
        if (ret == -1) {
printf("\tERROR %s():%s:%d\n", __FUNCTION__, __FILE__, __LINE__); fflush(stdout);
	    mpi_errno = MPI_ERR_OTHER;
	    goto fn_fail;
        }
    }
#endif	/* NOTYET_XPMEM */
    mpi_errno = MPIDI_XPMEM_i_foo(comm_ptr);
    if (mpi_errno != MPI_SUCCESS)
        goto fn_fail;

    mpi_errno = MPIDI_NM_mpi_win_create(base, length, disp_unit, info, comm_ptr, win_ptr);
    if (mpi_errno != MPI_SUCCESS)
        goto fn_fail;

    /* win_ptr->dev.ch4.xpmem ?? see mpidpre.h */

  fn_exit:
    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE);
    return mpi_errno;
  fn_fail:
    goto fn_exit;
}

static inline int MPIDI_SHM_mpi_win_attach(MPIR_Win * win, void *base, MPI_Aint size)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_ATTACH);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_ATTACH);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_ATTACH);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_allocate_shared(MPI_Aint size,
                                                    int disp_unit,
                                                    MPIR_Info * info_ptr,
                                                    MPIR_Comm * comm_ptr,
                                                    void **base_ptr, MPIR_Win ** win_ptr)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE_SHARED);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE_SHARED);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE_SHARED);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_detach(MPIR_Win * win, const void *base)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_DETACH);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_DETACH);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_DETACH);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_shared_query(MPIR_Win * win,
                                                 int rank,
                                                 MPI_Aint * size, int *disp_unit, void *baseptr)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_SHARED_QUERY);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_SHARED_QUERY);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_SHARED_QUERY);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_allocate(MPI_Aint size,
                                             int disp_unit,
                                             MPIR_Info * info,
                                             MPIR_Comm * comm, void *baseptr, MPIR_Win ** win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_ALLOCATE);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_flush(int rank, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_flush_local_all(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL_ALL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL_ALL);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL_ALL);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_unlock_all(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK_ALL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK_ALL);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_UNLOCK_ALL);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_create_dynamic(MPIR_Info * info, MPIR_Comm * comm,
                                                   MPIR_Win ** win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE_DYNAMIC);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE_DYNAMIC);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_CREATE_DYNAMIC);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_flush_local(int rank, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_LOCAL);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_sync(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_SYNC);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_SYNC);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_SYNC);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_flush_all(MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_ALL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_ALL);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_FLUSH_ALL);
    return MPI_SUCCESS;
}

static inline int MPIDI_SHM_mpi_win_lock_all(int assert, MPIR_Win * win)
{
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK_ALL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK_ALL);

    MPIR_Assert(0);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_WIN_LOCK_ALL);
    return MPI_SUCCESS;
}

static inline int MPIDI_XPMEM_i_foo(MPIR_Comm * comm_ptr)
{
    int mpi_errno = MPI_SUCCESS;
    const int max_local = 256;
    int comm_size, ii, num_local = 0;
    int *local_procs;

    local_procs = (int *) MPL_malloc(max_local * sizeof (int) * 2);
    MPIR_Assert(local_procs != 0);
    // for (ii = 0; ii < max_local; ii++) { local_procs[ii] = MPI_PROC_NULL; }

    comm_size = comm_ptr->local_size;
    for (ii = 0; ii < comm_size; ii++) {
	if ( ! MPIDI_CH4_rank_is_local(ii, comm_ptr) ) { continue; }
	if (num_local < max_local) {
	    local_procs[num_local] = ii;
	    num_local++;
	}
    }

    mpi_errno = MPIR_Group_translate_ranks_impl(comm_ptr->local_group,
		    num_local, local_procs,
		    MPIR_Process.comm_world, &local_procs[max_local]);
    MPIR_Assert(mpi_errno == MPI_SUCCESS);

    MPL_free(local_procs);

    return num_local;
}

#endif /* XPMEM_WIN_H_INCLUDED */
