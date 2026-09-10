// Address: 00417768
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void * FUN_00417768(undefined4 param_1,undefined4 param_2,void *param_3)

{
  SAFEARRAY *psa;
  void **ppvData;
  void *local_8;
  
  ppvData = &local_8;
  local_8 = param_3;
  psa = (SAFEARRAY *)FUN_004176d0(param_1);
  SafeArrayAccessData(psa,ppvData);
  FUN_00411988();
  return local_8;
}

