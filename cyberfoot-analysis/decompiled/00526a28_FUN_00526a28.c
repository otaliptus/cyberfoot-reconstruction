// Address: 00526a28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526a28(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_74 [8];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_2c = *param_3;
  local_28 = param_3[1];
  local_24 = param_3[2];
  local_20 = param_3[3];
  if (*(char *)(param_1 + 0xa4) != '\0') {
    local_1c = FUN_004b1268(PTR_DAT_004add1c,1,&local_2c);
    FUN_004b1c5c(param_2,local_1c,0);
    FUN_004aeba4(local_4c);
    if ((*(char *)(param_1 + 0xa4) == '\x01') || (*(char *)(param_1 + 0xa4) == '\x03')) {
      uVar1 = FUN_0052698c(local_4c,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x78),
                           0);
      uVar4 = 0x3f800000;
      uVar2 = FUN_004b1cd0(200,*(undefined4 *)(param_1 + 0xa0));
      local_10 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,uVar4);
      FUN_004af5f4(param_2,local_10,uVar1);
      FUN_00403a84(local_10);
      FUN_004b1510(uVar1);
      FUN_004aeba4(local_3c);
      uVar2 = FUN_004b1cd0(0xaf,*(undefined4 *)(param_1 + 0xa0));
      uVar4 = FUN_004b1cd0(0,*(undefined4 *)(param_1 + 0xa0));
      uVar3 = 1;
      FUN_004aeba4(local_6c);
      local_c = FUN_004aef34(PTR_DAT_004adf94,1,local_6c,uVar3,uVar4,uVar2);
      FUN_004b1548(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b152c(uVar1);
      FUN_004b1c30(param_2,local_c,uVar1);
      FUN_004b1510(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b152c(uVar1);
      FUN_004b1c30(param_2,local_c,uVar1);
      FUN_004af62c(param_2,local_c,local_3c);
      FUN_00403a84(local_c);
      FUN_004aeba4(local_3c);
      uVar2 = FUN_004b1cd0(0,*(undefined4 *)(param_1 + 0xa0));
      uVar4 = FUN_004b1cd0(0xdc,*(undefined4 *)(param_1 + 0xa0));
      uVar3 = 1;
      FUN_004aeba4(local_6c);
      local_c = FUN_004aef34(PTR_DAT_004adf94,1,local_6c,uVar3,uVar4,uVar2);
      FUN_004b1510(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b152c(uVar1);
      FUN_004b1c30(param_2,local_c,uVar1);
      FUN_004b1510(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b1548(uVar1);
      FUN_004b152c(uVar1);
      FUN_004b1c30(param_2,local_c,uVar1);
      FUN_004af62c(param_2,local_c,local_3c);
      FUN_00403a84(local_c);
      FUN_00403a84(uVar1);
    }
    if ((*(char *)(param_1 + 0xa4) == '\x02') || (*(char *)(param_1 + 0xa4) == '\x03')) {
      uVar1 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
      FUN_004aeba4(local_5c);
      FUN_004b15a4(uVar1,local_5c);
      local_8 = FUN_004b166c(PTR_DAT_004ae160,1,uVar1);
      FUN_004aeb90(local_74);
      FUN_004b1780(local_8,local_74);
      uVar2 = FUN_004b1cd0(0x96,*(undefined4 *)(param_1 + 0xa8));
      FUN_004b16c4(local_8,uVar2);
      local_14 = FUN_004b1cd0(0,*(undefined4 *)(param_1 + 0x1c));
      local_18 = 1;
      FUN_004b170c(local_8,&local_14,&local_18);
      FUN_004b1c30(param_2,local_8,uVar1);
      FUN_00403a84(uVar1);
      FUN_00403a84(local_8);
    }
    FUN_004b1c84(param_2);
    FUN_00403a84(local_1c);
  }
  return;
}

