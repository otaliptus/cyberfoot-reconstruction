// Address: 005a3ac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3ac8(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [60];
  undefined1 local_9c [56];
  undefined1 local_64 [56];
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_ec = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_dc = 0;
  local_e0 = 0;
  puStack_f0 = &LAB_005a3cec;
  uStack_f4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_f4;
  DAT_006d24e4 = '\0';
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < iVar3) {
    iVar5 = 1;
    piVar4 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if ((((-1 < *piVar4) &&
           ((float)DAT_006d24b4 * _DAT_005a3cfc <=
            (float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *piVar4 * 0x2f8))) &&
          (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *piVar4 * 0x2f8) < *(int *)PTR_DAT_0066b610))
         && (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130) != *piVar4
            )) {
        DAT_006d24e4 = '\x01';
        DAT_006d24e0 = *piVar4;
        DAT_006d24dc = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = DAT_006d24e0;
  local_8 = param_1;
  if (DAT_006d24e4 == '\0') {
    puStack_ec = &stack0xfffffffc;
    FUN_005a3d1c(param_1);
  }
  else {
    FUN_004030d4(local_2c,*(int *)PTR_DAT_0066b718 +
                          *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d24e0 * 0x2f8) * 0x80);
    FUN_004030a4(local_2c,&DAT_005a3d00,0x1b);
    FUN_004030d4(local_64,local_2c);
    FUN_004030a4(local_64,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8,0x34);
    FUN_004030d4(local_9c,local_64);
    FUN_004030a4(local_9c,&DAT_005a3d04,0x35);
    FUN_004030d4(local_d8,local_9c);
    FUN_004030a4(local_d8,&DAT_005a3d08,0x38);
    FUN_00405194(&local_10,local_d8);
    FUN_00642c50(0x133,&local_dc);
    uVar2 = FUN_00402c38();
    FUN_006468f4(uVar2,&local_e0);
    FUN_00405330(&local_c,5);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x38c),local_c);
  }
  puVar1 = puStack_ec;
  *in_FS_OFFSET = uStack_f4;
  puStack_ec = &LAB_005a3cf3;
  puStack_f0 = (undefined1 *)0x5a3cde;
  FUN_00405008(&local_e0,2,puVar1);
  puStack_f0 = (undefined1 *)0x5a3ceb;
  FUN_00405008(&local_10,2);
  return;
}

