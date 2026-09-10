// Address: 004237f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004237f8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_00421f98(param_1,&local_c,1);
  FUN_004049c4(param_2,0,local_c & 0xff);
  uVar1 = thunk_FUN_00404db0(param_2);
  FUN_00421f98(param_1,uVar1,local_c & 0xff);
  return;
}

