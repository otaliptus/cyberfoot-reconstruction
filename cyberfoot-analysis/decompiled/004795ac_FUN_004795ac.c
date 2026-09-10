// Address: 004795ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004795ac(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_004796ce;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = false;
  local_c = param_3;
  local_8 = param_2;
  iVar3 = FUN_00404ba4(*param_1);
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      uVar4 = (uint)*(byte *)(*param_1 + -1 + iVar5);
      if (((byte)PTR_DAT_0066b77c[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0) {
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (bVar1) {
    puVar7 = &local_10;
    iVar3 = FUN_00404ba4(*param_1);
    uVar6 = iVar3 + -2 == 0;
    FUN_00404e04(*param_1,iVar3 + -2,3,puVar7);
    FUN_00404cf0(local_10,&DAT_004796e4);
    if ((bool)uVar6) {
      puVar7 = &local_14;
      iVar3 = FUN_00404ba4(*param_1);
      FUN_00404e04(*param_1,1,iVar3 + -3,puVar7);
      FUN_00404c64(param_1,6);
    }
    else {
      FUN_00404c64(param_1,5);
    }
  }
  else if (local_c != 0) {
    FUN_00404e8c(&DAT_004796fc,param_1,local_c);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004796d5;
  puStack_28 = (undefined1 *)0x4796cd;
  FUN_004048f8(&local_14,2,puVar2);
  return;
}

