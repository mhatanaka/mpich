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
#ifndef XPMEM_SEND_H_INCLUDED
#define XPMEM_SEND_H_INCLUDED

#include "xpmem_impl.h"

static inline int MPIDI_SHM_mpi_send(const void *buf,
                                     int count,
                                     MPI_Datatype datatype,
                                     int rank,
                                     int tag,
                                     MPIR_Comm * comm, int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_SEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_SEND);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_send)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_SEND);
    return mpi_errno;
}




static inline int MPIDI_SHM_irsend(const void *buf,
                                   int count,
                                   MPI_Datatype datatype,
                                   int rank,
                                   int tag,
                                   MPIR_Comm * comm, int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_IRSEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_IRSEND);

#ifdef	notdef
    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_irsend)(buf, count, datatype, rank, tag, comm, context_offset, request);
#endif

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_IRSEND);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_ssend(const void *buf,
                                      int count,
                                      MPI_Datatype datatype,
                                      int rank,
                                      int tag,
                                      MPIR_Comm * comm, int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_SSEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_SSEND);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_ssend)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_SSEND);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_startall(int count, MPIR_Request * requests[])
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_STARTALL);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_STARTALL);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_startall)(count, requests);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_STARTALL);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_send_init(const void *buf,
                                          int count,
                                          MPI_Datatype datatype,
                                          int rank,
                                          int tag,
                                          MPIR_Comm * comm, int context_offset,
                                          MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_SEND_INIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_SEND_INIT);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_send_init)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_SEND_INIT);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_ssend_init(const void *buf,
                                           int count,
                                           MPI_Datatype datatype,
                                           int rank,
                                           int tag,
                                           MPIR_Comm * comm,
                                           int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_SSEND_INIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_SSEND_INIT);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_ssend_init)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_SSEND_INIT);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_bsend_init(const void *buf,
                                           int count,
                                           MPI_Datatype datatype,
                                           int rank,
                                           int tag,
                                           MPIR_Comm * comm,
                                           int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_BSEND_INIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_BSEND_INIT);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_bsend_init)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_BSEND_INIT);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_rsend_init(const void *buf,
                                           int count,
                                           MPI_Datatype datatype,
                                           int rank,
                                           int tag,
                                           MPIR_Comm * comm,
                                           int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_RSEND_INIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_RSEND_INIT);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_rsend_init)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_RSEND_INIT);
    return mpi_errno;
}

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_isend)
static inline int MPIDI_SHM_mpi_isend(const void *buf,
                                      int count,
                                      MPI_Datatype datatype,
                                      int rank,
                                      int tag,
                                      MPIR_Comm * comm, int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_ISEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_ISEND);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_isend)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_ISEND);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_issend(const void *buf,
                                       int count,
                                       MPI_Datatype datatype,
                                       int rank,
                                       int tag,
                                       MPIR_Comm * comm, int context_offset,
                                       MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_ISSEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_ISSEND);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_issend)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_ISSEND);
    return mpi_errno;
}

static inline int MPIDI_SHM_mpi_cancel_send(MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_CANCEL_SEND);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_CANCEL_SEND);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_cancel_send)(sreq);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_CANCEL_SEND);
    return mpi_errno;
}

#endif /* XPMEM_SEND_H_INCLUDED */
