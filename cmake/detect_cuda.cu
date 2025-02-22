/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <stdio.h>

int main(int argc, char** argv) {
  cudaDeviceProp dP;

  int rc = cudaGetDeviceProperties(&dP, 0);
  if (rc != cudaSuccess) {
    cudaError_t error = cudaGetLastError();
    printf("CUDA error: %s", cudaGetErrorString(error));
    return rc; /* Failure */
  }
  printf("%d%d", dP.major, dP.minor);
  return 0;
}
