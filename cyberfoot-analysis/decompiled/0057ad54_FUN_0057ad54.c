// Address: 0057ad54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057ad54(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 in_ST0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  uVar3 = 0xffffff;
  if (*(char *)(param_1 + 0x28c) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x290);
  }
  local_8 = param_2;
  if (*(char *)(param_1 + 0x28c) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x264);
    uVar2 = *(undefined4 *)(param_1 + 0x260);
    uVar5 = *(undefined4 *)(param_1 + 0x24c);
    uVar4 = *(undefined4 *)(param_1 + 0x248);
    FUN_0057b220(param_1,param_2,param_3,uVar4,uVar5,uVar2,uVar1);
    FUN_00528c98(*(undefined4 *)(param_1 + 0x250),&local_1c,*(undefined1 *)(param_1 + 0x2a0),
                 local_5c,(double)in_ST0,uVar4,uVar5,uVar2,uVar1);
    local_c = FUN_004b1268(PTR_DAT_004add1c,1,local_5c);
    FUN_004b1c5c(local_8,local_c,0);
  }
  else {
    local_c = 0;
  }
  FUN_0052a138(*(undefined4 *)(param_1 + 0x250),&local_1c,local_4c);
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    FUN_004aeba4(local_3c);
    FUN_004aeba4(local_2c);
    uVar1 = FUN_004b1cd0(0,uVar3);
    uVar2 = FUN_004b1cd0(0x78,uVar3);
    uVar5 = 0;
    FUN_004aeba4(local_5c);
    uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_5c,uVar5,uVar2,uVar1);
    FUN_004af62c(local_8,uVar1,local_3c);
    FUN_00403a84(uVar1);
    uVar1 = FUN_004b1cd0(0x78,uVar3);
    uVar3 = FUN_004b1cd0(0,uVar3);
    uVar2 = 0;
    FUN_004aeba4(local_5c);
    uVar3 = FUN_004aef34(PTR_DAT_004adf94,1,local_5c,uVar2,uVar3,uVar1);
    FUN_004af62c(local_8,uVar3,local_2c);
    FUN_00403a84(uVar3);
  }
  else if (*(char *)(param_1 + 0x2a0) == '\x01') {
    FUN_004aeba4(local_3c);
    FUN_004aeba4(local_2c);
    uVar1 = FUN_004b1cd0(0,uVar3);
    uVar2 = FUN_004b1cd0(0x78,uVar3);
    uVar5 = 1;
    FUN_004aeba4(local_5c);
    uVar1 = FUN_004aef34(PTR_DAT_004adf94,1,local_5c,uVar5,uVar2,uVar1);
    FUN_004af62c(local_8,uVar1,local_3c);
    FUN_00403a84(uVar1);
    uVar1 = FUN_004b1cd0(0x78,uVar3);
    uVar3 = FUN_004b1cd0(0,uVar3);
    uVar2 = 1;
    FUN_004aeba4(local_5c);
    uVar3 = FUN_004aef34(PTR_DAT_004adf94,1,local_5c,uVar2,uVar3,uVar1);
    FUN_004af62c(local_8,uVar3,local_2c);
    FUN_00403a84(uVar3);
  }
  if (*(char *)(param_1 + 0x28c) == '\0') {
    FUN_004b1c84(local_8);
    FUN_00403a84(local_c);
  }
  return;
}

