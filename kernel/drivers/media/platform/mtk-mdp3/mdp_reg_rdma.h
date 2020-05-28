/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 * Author: Ping-Hsun Wu <ping-hsun.wu@mediatek.com>
 */

#ifndef __MDP_REG_RDMA_H__
#define __MDP_REG_RDMA_H__

#include "mmsys_reg_base.h"

#define MDP_RDMA_EN                     0x000
#define MDP_RDMA_RESET                  0x008
#define MDP_RDMA_INTERRUPT_ENABLE       0x010
#define MDP_RDMA_INTERRUPT_STATUS       0x018
#define MDP_RDMA_CON                    0x020
#define MDP_RDMA_GMCIF_CON              0x028
#define MDP_RDMA_SRC_CON                0x030
#define MDP_RDMA_SRC_BASE_0             0xf00
#define MDP_RDMA_SRC_BASE_1             0xf08
#define MDP_RDMA_SRC_BASE_2             0xf10
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_Y  0xf20
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_C  0xf28
#define MDP_RDMA_MF_BKGD_SIZE_IN_BYTE   0x060
#define MDP_RDMA_MF_BKGD_SIZE_IN_PXL    0x068
#define MDP_RDMA_MF_SRC_SIZE            0x070
#define MDP_RDMA_MF_CLIP_SIZE           0x078
#define MDP_RDMA_MF_OFFSET_1            0x080
#define MDP_RDMA_MF_PAR                 0x088
#define MDP_RDMA_SF_BKGD_SIZE_IN_BYTE   0x090
#define MDP_RDMA_SF_PAR                 0x0b8
#define MDP_RDMA_MB_DEPTH               0x0c0
#define MDP_RDMA_MB_BASE                0x0c8
#define MDP_RDMA_MB_CON                 0x0d0
#define MDP_RDMA_SB_DEPTH               0x0d8
#define MDP_RDMA_SB_BASE                0x0e0
#define MDP_RDMA_SB_CON                 0x0e8
#define MDP_RDMA_VC1_RANGE              0x0f0
#define MDP_RDMA_SRC_END_0              0x100
#define MDP_RDMA_SRC_END_1              0x108
#define MDP_RDMA_SRC_END_2              0x110
#define MDP_RDMA_SRC_OFFSET_0           0x118
#define MDP_RDMA_SRC_OFFSET_1           0x120
#define MDP_RDMA_SRC_OFFSET_2           0x128
#define MDP_RDMA_SRC_OFFSET_W_0         0x130
#define MDP_RDMA_SRC_OFFSET_W_1         0x138
#define MDP_RDMA_SRC_OFFSET_W_2         0x140
#define MDP_RDMA_SRC_OFFSET_0_P         0x148
#define MDP_RDMA_TRANSFORM_0            0x200
#define MDP_RDMA_TRANSFORM_1            0x208
#define MDP_RDMA_TRANSFORM_2            0x210
#define MDP_RDMA_TRANSFORM_3            0x218
#define MDP_RDMA_TRANSFORM_4            0x220
#define MDP_RDMA_TRANSFORM_5            0x228
#define MDP_RDMA_TRANSFORM_6            0x230
#define MDP_RDMA_TRANSFORM_7            0x238
#define MDP_RDMA_DMABUF_CON_0           0x240
#define MDP_RDMA_DMAULTRA_CON_0         0x248
#define MDP_RDMA_DMABUF_CON_1           0x250
#define MDP_RDMA_DMAULTRA_CON_1         0x258
#define MDP_RDMA_DMABUF_CON_2           0x260
#define MDP_RDMA_DMAULTRA_CON_2         0x268
#define MDP_RDMA_DITHER_CON             0x288
#define MDP_RDMA_RESV_DUMMY_0           0x2a0
#define MDP_RDMA_CHKS_EXTR              0x300
#define MDP_RDMA_CHKS_INTW              0x308
#define MDP_RDMA_CHKS_INTR              0x310
#define MDP_RDMA_CHKS_ROTO              0x318
#define MDP_RDMA_CHKS_SRIY              0x320
#define MDP_RDMA_CHKS_SRIU              0x328
#define MDP_RDMA_CHKS_SRIV              0x330
#define MDP_RDMA_CHKS_SROY              0x338
#define MDP_RDMA_CHKS_SROU              0x340
#define MDP_RDMA_CHKS_SROV              0x348
#define MDP_RDMA_CHKS_VUPI              0x350
#define MDP_RDMA_CHKS_VUPO              0x358
#define MDP_RDMA_DEBUG_CON              0x380
#define MDP_RDMA_MON_STA_0              0x400
#define MDP_RDMA_MON_STA_1              0x408
#define MDP_RDMA_MON_STA_2              0x410
#define MDP_RDMA_MON_STA_3              0x418
#define MDP_RDMA_MON_STA_4              0x420
#define MDP_RDMA_MON_STA_5              0x428
#define MDP_RDMA_MON_STA_6              0x430
#define MDP_RDMA_MON_STA_7              0x438
#define MDP_RDMA_MON_STA_8              0x440
#define MDP_RDMA_MON_STA_9              0x448
#define MDP_RDMA_MON_STA_10             0x450
#define MDP_RDMA_MON_STA_11             0x458
#define MDP_RDMA_MON_STA_12             0x460
#define MDP_RDMA_MON_STA_13             0x468
#define MDP_RDMA_MON_STA_14             0x470
#define MDP_RDMA_MON_STA_15             0x478
#define MDP_RDMA_MON_STA_16             0x480
#define MDP_RDMA_MON_STA_17             0x488
#define MDP_RDMA_MON_STA_18             0x490
#define MDP_RDMA_MON_STA_19             0x498
#define MDP_RDMA_MON_STA_20             0x4a0
#define MDP_RDMA_MON_STA_21             0x4a8
#define MDP_RDMA_MON_STA_22             0x4b0
#define MDP_RDMA_MON_STA_23             0x4b8
#define MDP_RDMA_MON_STA_24             0x4c0
#define MDP_RDMA_MON_STA_25             0x4c8
#define MDP_RDMA_MON_STA_26             0x4d0
#define MDP_RDMA_MON_STA_27             0x4d8
#define MDP_RDMA_MON_STA_28             0x4e0

/* MASK */
#define MDP_RDMA_EN_MASK                    0x00000001
#define MDP_RDMA_RESET_MASK                 0x00000001
#define MDP_RDMA_INTERRUPT_ENABLE_MASK      0x00000007
#define MDP_RDMA_INTERRUPT_STATUS_MASK      0x00000007
#define MDP_RDMA_CON_MASK                   0x00001110
#define MDP_RDMA_GMCIF_CON_MASK             0xfffb3771
#define MDP_RDMA_SRC_CON_MASK               0xf3ffffff
#define MDP_RDMA_SRC_BASE_0_MASK            0xffffffff
#define MDP_RDMA_SRC_BASE_1_MASK            0xffffffff
#define MDP_RDMA_SRC_BASE_2_MASK            0xffffffff
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_Y_MASK 0xffffffff
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_C_MASK 0xffffffff
#define MDP_RDMA_MF_BKGD_SIZE_IN_BYTE_MASK  0x001fffff
#define MDP_RDMA_MF_BKGD_SIZE_IN_PXL_MASK   0x001fffff
#define MDP_RDMA_MF_SRC_SIZE_MASK           0x1fff1fff
#define MDP_RDMA_MF_CLIP_SIZE_MASK          0x1fff1fff
#define MDP_RDMA_MF_OFFSET_1_MASK           0x003f001f
#define MDP_RDMA_MF_PAR_MASK                0x1ffff3ff
#define MDP_RDMA_SF_BKGD_SIZE_IN_BYTE_MASK  0x001fffff
#define MDP_RDMA_SF_PAR_MASK                0x1ffff3ff
#define MDP_RDMA_MB_DEPTH_MASK              0x0000007f
#define MDP_RDMA_MB_BASE_MASK               0x0000ffff
#define MDP_RDMA_MB_CON_MASK                0x3fff1fff
#define MDP_RDMA_SB_DEPTH_MASK              0x0000007f
#define MDP_RDMA_SB_BASE_MASK               0x0000ffff
#define MDP_RDMA_SB_CON_MASK                0x3fff1fff
#define MDP_RDMA_VC1_RANGE_MASK             0x001f1f11
#define MDP_RDMA_SRC_END_0_MASK             0xffffffff
#define MDP_RDMA_SRC_END_1_MASK             0xffffffff
#define MDP_RDMA_SRC_END_2_MASK             0xffffffff
#define MDP_RDMA_SRC_OFFSET_0_MASK          0xffffffff
#define MDP_RDMA_SRC_OFFSET_1_MASK          0xffffffff
#define MDP_RDMA_SRC_OFFSET_2_MASK          0xffffffff
#define MDP_RDMA_SRC_OFFSET_W_0_MASK        0x0000ffff
#define MDP_RDMA_SRC_OFFSET_W_1_MASK        0x0000ffff
#define MDP_RDMA_SRC_OFFSET_W_2_MASK        0x0000ffff
#define MDP_RDMA_SRC_OFFSET_0_P_MASK        0xffffffff
#define MDP_RDMA_TRANSFORM_0_MASK           0xff110777
#define MDP_RDMA_TRANSFORM_1_MASK           0x1ff7fdff
#define MDP_RDMA_TRANSFORM_2_MASK           0x1ff7fdff
#define MDP_RDMA_TRANSFORM_3_MASK           0x1fff1fff
#define MDP_RDMA_TRANSFORM_4_MASK           0x1fff1fff
#define MDP_RDMA_TRANSFORM_5_MASK           0x1fff1fff
#define MDP_RDMA_TRANSFORM_6_MASK           0x1fff1fff
#define MDP_RDMA_TRANSFORM_7_MASK           0x00001fff
#define MDP_RDMA_DMABUF_CON_0_MASK          0x077f007f
#define MDP_RDMA_DMAULTRA_CON_0_MASK        0x7f7f7f7f
#define MDP_RDMA_DMABUF_CON_1_MASK          0x073f003f
#define MDP_RDMA_DMAULTRA_CON_1_MASK        0x3f3f3f3f
#define MDP_RDMA_DMABUF_CON_2_MASK          0x071f001f
#define MDP_RDMA_DMAULTRA_CON_2_MASK        0x1f1f1f1f

#define MDP_RDMA_DITHER_CON_MASK            0xffffffff
#define MDP_RDMA_RESV_DUMMY_0_MASK          0xffffffff
#define MDP_RDMA_CHKS_EXTR_MASK             0xffffff01
#define MDP_RDMA_CHKS_INTW_MASK             0xffffff01
#define MDP_RDMA_CHKS_INTR_MASK             0xffffff01
#define MDP_RDMA_CHKS_ROTO_MASK             0xffffff01
#define MDP_RDMA_CHKS_SRIY_MASK             0xffffff01
#define MDP_RDMA_CHKS_SRIU_MASK             0xffffff01
#define MDP_RDMA_CHKS_SRIV_MASK             0xffffff01
#define MDP_RDMA_CHKS_SROY_MASK             0xffffff01
#define MDP_RDMA_CHKS_SROU_MASK             0xffffff01
#define MDP_RDMA_CHKS_SROV_MASK             0xffffff01
#define MDP_RDMA_CHKS_VUPI_MASK             0xffffff01
#define MDP_RDMA_CHKS_VUPO_MASK             0xffffff01
#define MDP_RDMA_DEBUG_CON_MASK             0x00001f11
#define MDP_RDMA_MON_STA_0_MASK             0xffffffff
#define MDP_RDMA_MON_STA_1_MASK             0xffffffff
#define MDP_RDMA_MON_STA_2_MASK             0xffffffff
#define MDP_RDMA_MON_STA_3_MASK             0xffffffff
#define MDP_RDMA_MON_STA_4_MASK             0xffffffff
#define MDP_RDMA_MON_STA_5_MASK             0xffffffff
#define MDP_RDMA_MON_STA_6_MASK             0xffffffff
#define MDP_RDMA_MON_STA_7_MASK             0xffffffff
#define MDP_RDMA_MON_STA_8_MASK             0xffffffff
#define MDP_RDMA_MON_STA_9_MASK             0xffffffff
#define MDP_RDMA_MON_STA_10_MASK            0xffffffff
#define MDP_RDMA_MON_STA_11_MASK            0xffffffff
#define MDP_RDMA_MON_STA_12_MASK            0xffffffff
#define MDP_RDMA_MON_STA_13_MASK            0xffffffff
#define MDP_RDMA_MON_STA_14_MASK            0xffffffff
#define MDP_RDMA_MON_STA_15_MASK            0xffffffff
#define MDP_RDMA_MON_STA_16_MASK            0xffffffff
#define MDP_RDMA_MON_STA_17_MASK            0xffffffff
#define MDP_RDMA_MON_STA_18_MASK            0xffffffff
#define MDP_RDMA_MON_STA_19_MASK            0xffffffff
#define MDP_RDMA_MON_STA_20_MASK            0xffffffff
#define MDP_RDMA_MON_STA_21_MASK            0xffffffff
#define MDP_RDMA_MON_STA_22_MASK            0xffffffff
#define MDP_RDMA_MON_STA_23_MASK            0xffffffff
#define MDP_RDMA_MON_STA_24_MASK            0xffffffff
#define MDP_RDMA_MON_STA_25_MASK            0xffffffff
#define MDP_RDMA_MON_STA_26_MASK            0xffffffff
#define MDP_RDMA_MON_STA_27_MASK            0xffffffff
#define MDP_RDMA_MON_STA_28_MASK            0xffffffff

#endif  // __MDP_REG_RDMA_H__
