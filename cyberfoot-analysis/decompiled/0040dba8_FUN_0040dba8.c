// Address: 0040dba8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040dba8(LCID param_1,LCTYPE param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  CHAR local_104 [256];
  
  iVar1 = GetLocaleInfoA(param_1,param_2,local_104,0x100);
  if (iVar1 < 1) {
    FUN_00404928(param_4,param_3);
  }
  else {
    FUN_004049c4(param_4,local_104,iVar1 + -1);
  }
  return;
}

