// Address: 00417744
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LONG FUN_00417744(undefined4 param_1,UINT param_2,LONG param_3)

{
  SAFEARRAY *psa;
  LONG *plUbound;
  LONG local_c;
  
  plUbound = &local_c;
  local_c = param_3;
  psa = (SAFEARRAY *)FUN_004176d0(param_1);
  SafeArrayGetUBound(psa,param_2,plUbound);
  FUN_00411988();
  return local_c;
}

