// Address: 005a4648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm23_CHButton1Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [60];
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  undefined1 local_40 [28];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_104 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  puStack_108 = &LAB_005a4991;
  uStack_10c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10c;
  FUN_00466128(*(undefined4 *)(param_1 + 0x388),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x390),0);
  FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_c);
  if (local_c != 0) {
    FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_10);
    FUN_0040343c(local_10,&local_8);
    if (local_8 != 0) goto LAB_005a4959;
  }
  FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_14);
  if (local_14 == 0) {
    local_1c = 0;
  }
  else {
    FUN_00466208(*(undefined4 *)(param_1 + 0x398),&local_18);
    local_1c = FUN_00409ff8(local_18);
    local_1c = local_1c * 1000;
  }
  if (((float)local_1c * _DAT_005a49a0 <=
       (float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d24e0 * 0x2f8)) ||
     ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d24e0 * 0x2f8) <= _DAT_005a49a4)
     ) {
    iVar3 = local_1c;
    if ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d24e0 * 0x2f8) < _DAT_005a49a4
       ) {
      iVar3 = 0;
      FUN_00466128(*(undefined4 *)(param_1 + 0x390),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
    }
    FUN_004e1414(*(undefined4 *)(param_1 + 0x394),0);
    if (DAT_006d24d0 < iVar3) {
      DAT_006d24d4 = DAT_006d24e0;
      DAT_006d24d0 = iVar3;
    }
    do {
      if (*(int *)(PTR_DAT_0066ac78 + *(int *)(PTR_DAT_0066ac78 + 0x13c) * 4 + 0x13c) ==
          DAT_006d24e0) {
        FUN_005a3d1c(param_1);
        goto LAB_005a4959;
      }
      DAT_006d24dc = DAT_006d24dc + 1;
      DAT_006d24e0 = *(int *)(PTR_DAT_0066ac78 + DAT_006d24dc * 4 + 0x13c);
    } while (((*(int *)PTR_DAT_0066b610 + -2 <
               *(int *)(*(int *)PTR_DAT_0066af70 + 100 + DAT_006d24e0 * 0x2f8)) ||
             (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130) ==
              DAT_006d24e0)) ||
            ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + DAT_006d24e0 * 0x2f8) <
             (float)DAT_006d24b4 * _DAT_005a49a0));
    FUN_00466238(*(undefined4 *)(param_1 + 0x398),0);
    iVar3 = DAT_006d24e0;
    FUN_004030d4(local_40,*(int *)PTR_DAT_0066b718 +
                          *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d24e0 * 0x2f8) * 0x80);
    FUN_004030a4(local_40,&DAT_005a49a8,0x1b);
    FUN_004030d4(local_78,local_40);
    FUN_004030a4(local_78,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8,0x34);
    FUN_004030d4(local_b0,local_78);
    FUN_004030a4(local_b0,&DAT_005a49ac,0x35);
    FUN_004030d4(local_ec,local_b0);
    FUN_004030a4(local_ec,&DAT_005a49b0,0x38);
    FUN_00405194(&local_24,local_ec);
    FUN_00642c50(0x133,&local_f0);
    uVar2 = FUN_00402c38();
    FUN_006468f4(uVar2,&local_f4);
    FUN_00405330(&local_20,5);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x38c),local_20);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x388),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
  }
LAB_005a4959:
  puVar1 = puStack_104;
  *in_FS_OFFSET = uStack_10c;
  puStack_104 = &LAB_005a4998;
  puStack_108 = (undefined1 *)0x5a4976;
  FUN_00405008(&local_f4,2,puVar1);
  puStack_108 = (undefined1 *)0x5a4983;
  FUN_00405008(&local_24,2);
  puStack_108 = (undefined1 *)0x5a4990;
  FUN_004048f8(&local_18,4);
  return;
}

