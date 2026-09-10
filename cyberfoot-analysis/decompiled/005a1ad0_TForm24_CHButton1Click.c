// Address: 005a1ad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm24_CHButton1Click(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005a1df1;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_8);
  iVar2 = FUN_00409ff8(local_8);
  iVar3 = FUN_00652590(DAT_006d2494);
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 7) {
    uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
    switch(uVar4) {
    case 0:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 1:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 2:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 3:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 4:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
    }
  }
  else {
    uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
    switch(uVar4) {
    case 0:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 - iVar5;
      break;
    case 1:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 - iVar5;
      break;
    case 2:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 3:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
      break;
    case 4:
      local_c = iVar3;
      iVar5 = FUN_00402c38();
      iVar3 = iVar3 + iVar5;
    }
  }
  local_c = iVar3;
  if ((((float)iVar3 * _DAT_005a1e40 <=
        (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x38 + DAT_006d2494 * 0x130)) &&
      (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
       *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + DAT_006d2494 * 0x130))) &&
     (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
      *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + DAT_006d2494 * 0x130) - (double)_DAT_005a1e44))
  {
    local_14 = FUN_00402c38();
    uStack_10 = extraout_EDX;
    iVar3 = FUN_00402c38();
  }
  if ((iVar2 < 0x186a1) || (iVar2 <= iVar3 * 5)) {
    DAT_006d2498 = iVar3;
    if (iVar2 < iVar3) {
      FUN_005a1aa8();
    }
    else {
      FUN_005a1e54(param_1);
    }
  }
  else {
    FUN_00642c50(0x185,&local_20);
    FUN_00651ebc(iVar3 * 5,&local_24);
    FUN_00405330(&local_1c,3);
    FUN_00404b6c(&local_18,local_1c);
    FUN_00437fe8(local_18);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005a1df8;
  puStack_38 = (undefined1 *)0x5a1de0;
  FUN_00405008(&local_24,3,puVar1);
  puStack_38 = (undefined1 *)0x5a1de8;
  FUN_004048d4(&local_18);
  puStack_38 = (undefined1 *)0x5a1df0;
  FUN_004048d4(&local_8);
  return;
}

