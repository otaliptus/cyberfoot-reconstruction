// Address: 00557a1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00557a1c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_8 = param_3;
  uVar1 = FUN_0052698c(&local_18,param_3,3,0);
  uVar3 = 0x3f800000;
  uVar2 = FUN_004b1cd0(0xff,param_4);
  uVar2 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,uVar3);
  FUN_004aed50(uVar2,2);
  FUN_004af5f4(param_1,uVar2,uVar1);
  FUN_00403a84(uVar2);
  FUN_00403a84(uVar1);
  return;
}

