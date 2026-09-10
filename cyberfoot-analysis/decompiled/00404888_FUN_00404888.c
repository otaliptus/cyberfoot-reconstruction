// Address: 00404888
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404888(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,undefined4 param_3,LPDWORD param_4,
                 DWORD param_5,undefined4 param_6)

{
  undefined4 *lpParameter;
  
  lpParameter = (undefined4 *)FUN_004027fc(8);
  *lpParameter = param_3;
  lpParameter[1] = param_6;
  DAT_0066c04d = 1;
  CreateThread(param_1,param_2,FUN_00404850,lpParameter,param_5,param_4);
  return;
}

