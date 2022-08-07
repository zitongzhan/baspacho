/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "baspacho/baspacho/ComputationModel.h"

namespace BaSpaCho {

const ComputationModel ComputationModel::model_OpenBlas_i7_1185g7{
    {3.527141723946874224e-07, -5.382557351808083451e-08, 4.677984682984275924e-09,
     7.384424667338682676e-12},
    {1.101115592925888909e-06, 6.936563076265144074e-07, -1.827661167503034051e-09,
     1.959826916788009885e-09, 1.079857543323972179e-09, 2.963338652996178598e-11},
    {6.14190596709488416e-07, -4.489948374364910256e-09, 5.943145978912038475e-10,
     -1.201283634136652872e-08, 1.266858215451465993e-09, 2.624001993284897048e-11},
    {3.069607518266660019e-07, 3.763778311956422235e-08, 1.991443920635728855e-07,
     3.788938150548870089e-09}};

const ComputationModel ComputationModel::model_Cuda117_2080Ti{
    {1.826148710881364949e-05, 4.44453427795126131e-06, 4.824038596816424795e-09,
     2.616891884279722513e-13},
    {2.252999933361577123e-06, -3.090170544094683306e-08, 5.719994050518756252e-10,
     -1.007960791939421421e-09, 1.167012989682758675e-10, -4.025574444690399163e-13},
    {4.55174422740625352e-06, 8.155647192215145375e-11, -1.76305533240800307e-14,
     1.054095249414374123e-08, -2.491863357081539836e-12, -1.095648600879501635e-16},
    {1.975089750288875748e-06, -1.339369810950508464e-10, -3.758728373628488434e-10,
     1.745285595679570848e-13}};

}  // namespace BaSpaCho
