// Address: 005299cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005299cc(int param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  if (*(char *)(param_1 + 0x39) != '\0') {
    local_14 = local_24;
    uStack_10 = local_20;
    uStack_c = local_1c;
    uStack_8 = local_18;
    if (param_4 == '\0') {
      FUN_004aeba4(local_44,param_2,param_3,local_18,0x41200000,local_20,local_24);
      FUN_004aeba4(local_34);
      uVar1 = FUN_004b1cd0(0x1e,0);
      uVar2 = FUN_004b1cd0(0,0);
      uVar3 = 0;
      FUN_004aeba4(local_54);
      uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_54,uVar3,uVar2,uVar1);
      FUN_004af62c(param_2,uVar1,local_44);
      FUN_00403a84(uVar1);
      uVar1 = FUN_004b1cd0(0,0);
      uVar2 = FUN_004b1cd0(0x1e,0);
      uVar3 = 0;
      FUN_004aeba4(local_54);
      uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_54,uVar3,uVar2,uVar1);
      FUN_004af62c(param_2,uVar1,local_34);
      FUN_00403a84(uVar1);
    }
    else if (param_4 == '\x01') {
      FUN_004aeba4(local_44,param_2,param_3,0x41200000,local_1c,local_20,local_24);
      FUN_004aeba4(local_34);
      uVar1 = FUN_004b1cd0(0x1e,0);
      uVar2 = FUN_004b1cd0(0,0);
      uVar3 = 1;
      FUN_004aeba4(local_54);
      uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_54,uVar3,uVar2,uVar1);
      FUN_004af62c(param_2,uVar1,local_44);
      FUN_00403a84(uVar1);
      uVar1 = FUN_004b1cd0(0,0);
      uVar2 = FUN_004b1cd0(0x1e,0);
      uVar3 = 1;
      FUN_004aeba4(local_54);
      uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_54,uVar3,uVar2,uVar1);
      FUN_004af62c(param_2,uVar1,local_34);
      FUN_00403a84(uVar1);
    }
  }
  return;
}

