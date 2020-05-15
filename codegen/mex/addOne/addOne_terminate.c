/*
 * addOne_terminate.c
 *
 * Code generation for function 'addOne_terminate'
 *
 */

/* Include files */
#include "addOne_terminate.h"
#include "_coder_addOne_mex.h"
#include "addOne.h"
#include "addOne_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void addOne_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void addOne_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (addOne_terminate.c) */
