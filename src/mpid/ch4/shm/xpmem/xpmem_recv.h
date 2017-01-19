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
#ifndef XPMEM_RECV_H_INCLUDED
#define XPMEM_RECV_H_INCLUDED

#include "xpmem_impl.h"

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_recv)
static inline int MPIDI_SHM_mpi_recv(void *buf,
                                     int count,
                                     MPI_Datatype datatype,
                                     int rank,
                                     int tag,
                                     MPIR_Comm * comm,
                                     int context_offset, MPI_Status * status,
                                     MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_RECV);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_RECV);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_recv)(buf, count, datatype, rank, tag, comm, context_offset, status, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_RECV);
    return mpi_errno;
}

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_recv_init)
static inline int MPIDI_SHM_mpi_recv_init(void *buf,
                                          int count,
                                          MPI_Datatype datatype,
                                          int rank,
                                          int tag,
                                          MPIR_Comm * comm, int context_offset,
                                          MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_RECV_INIT);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_RECV_INIT);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_recv_init)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_RECV_INIT);
    return mpi_errno;
}


#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_imrecv)
static inline int MPIDI_SHM_mpi_imrecv(void *buf,
                                       int count,
                                       MPI_Datatype datatype,
                                       MPIR_Request * message, MPIR_Request ** rreqp)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_IMRECV);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_IMRECV);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_imrecv)(buf, count, datatype, message, rreqp);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_IMRECV);
    return mpi_errno;
}

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_irecv)
static inline int MPIDI_SHM_mpi_irecv(void *buf,
                                      int count,
                                      MPI_Datatype datatype,
                                      int rank,
                                      int tag,
                                      MPIR_Comm * comm, int context_offset, MPIR_Request ** request)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_IRECV);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_IRECV);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_irecv)(buf, count, datatype, rank, tag, comm, context_offset, request);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_IRECV);
    return mpi_errno;
}

#undef FCNAME
#define FCNAME DECL_FUNC(MPIDI_SHM_mpi_cancel_recv)
static inline int MPIDI_SHM_mpi_cancel_recv(MPIR_Request * rreq)
{
    int mpi_errno = MPI_SUCCESS;
    extern MPIDI_SHM_native_funcs_t MPIDI_SHM_native_posix_funcs;
    MPIR_FUNC_VERBOSE_STATE_DECL(MPID_STATE_MPIDI_SHM_MPI_CANCEL_RECV);
    MPIR_FUNC_VERBOSE_ENTER(MPID_STATE_MPIDI_SHM_MPI_CANCEL_RECV);

    mpi_errno = ((&MPIDI_SHM_native_posix_funcs)->mpi_cancel_recv)(rreq);

    MPIR_FUNC_VERBOSE_EXIT(MPID_STATE_MPIDI_SHM_MPI_CANCEL_RECV);
    return mpi_errno;
}

#endif /* XPMEM_RECV_H_INCLUDED */
