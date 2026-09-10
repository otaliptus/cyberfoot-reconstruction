// Address: 00417720
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LONG FUN_00417720(undefined4 param_1,UINT param_2,LONG param_3)

{
  SAFEARRAY *psa;
  LONG *plLbound;
  LONG local_c;
  
  plLbound = &local_c;
  local_c = param_3;
  psa = (SAFEARRAY *)FUN_004176d0(param_1);
  SafeArrayGetLBound(psa,param_2,plLbound);
  FUN_00411988();
  return local_c;
}

