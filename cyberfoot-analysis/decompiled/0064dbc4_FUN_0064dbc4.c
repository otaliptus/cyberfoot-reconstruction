// Address: 0064dbc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064dbc4(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  puStack_3c = &LAB_0064deab;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  *PTR_DAT_0066b2ac = 0;
  *PTR_DAT_0066b2d0 = 1;
  *PTR_DAT_0066b7a4 = 0;
  *(undefined4 *)PTR_DAT_0066acb4 = 0x3f800000;
  *(undefined4 *)PTR_DAT_0066ac50 = 0;
  *PTR_DAT_0066b35c = 0;
  *PTR_DAT_0066aec4 = 1;
  FUN_00642c50(0x135,&local_c);
  uVar3 = local_c;
  FUN_004030d4(local_28,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066afb0 * 0x130);
  FUN_004030a4(local_28,&DAT_0064debc,0x15);
  FUN_00405194(&local_10,local_28);
  FUN_004052cc(&local_8,local_10,uVar3);
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130);
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + iVar5 * 0x2f8);
  iVar6 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  cVar4 = FUN_0064dec0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar5 * 0x2f8));
  if (((cVar4 != '\0') &&
      (iVar5 = FUN_0064f2d0(*(undefined4 *)
                             (*(int *)PTR_DAT_0066af70 + 0x3c +
                             *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 +
                                     *(int *)PTR_DAT_0066afb0 * 0x130) * 0x2f8)), iVar5 == 0)) &&
     (iVar5 = FUN_0064f2d0(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c +
                            *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)), 0 < iVar5)) {
    iVar6 = iVar6 + -1;
  }
  puVar2 = puStack_38;
  if ((iVar1 != iVar6) && (iVar6 < iVar1)) {
    if (iVar1 == 5) {
      if (iVar6 < 3) {
        *PTR_DAT_0066b2ac = 1;
      }
      if (iVar6 == 3) {
        *PTR_DAT_0066aec4 = 0;
        *PTR_DAT_0066b7a4 = 1;
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + *(int *)PTR_DAT_0066afb0 * 0x130) < 0x1e) {
          *(undefined4 *)PTR_DAT_0066acb4 = 0x40000000;
        }
        else {
          *(undefined4 *)PTR_DAT_0066acb4 = 0x3f800000;
        }
      }
      if (iVar6 == 4) {
        *PTR_DAT_0066aec4 = 0;
        *PTR_DAT_0066b7a4 = 1;
        iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + *(int *)PTR_DAT_0066afb0 * 0x130);
        if (iVar5 < 0x19) {
          *(undefined4 *)PTR_DAT_0066acb4 = 0x3f666666;
        }
        else if (iVar5 < 0x1e) {
          *(undefined4 *)PTR_DAT_0066acb4 = 0x3f333333;
        }
      }
    }
    else if (iVar1 == 4) {
      if (iVar6 < 1) {
        *PTR_DAT_0066b2ac = 1;
      }
      else if (iVar6 < 3) {
        *PTR_DAT_0066aec4 = 0;
        *PTR_DAT_0066b7a4 = 1;
        *(undefined4 *)PTR_DAT_0066acb4 = 0x3f000000;
      }
    }
    else if (iVar1 == 3) {
      if (iVar6 == -1) {
        *PTR_DAT_0066b2ac = 1;
      }
      else if (iVar6 < 2) {
        *PTR_DAT_0066aec4 = 0;
        *PTR_DAT_0066b7a4 = 1;
        *(undefined4 *)PTR_DAT_0066acb4 = 0x3e4ccccd;
      }
    }
    else if ((iVar1 == 2) && (iVar6 == -1)) {
      *PTR_DAT_0066aec4 = 0;
      *PTR_DAT_0066b7a4 = 1;
      *(undefined4 *)PTR_DAT_0066acb4 = 0x3e4ccccd;
    }
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0064deb2;
  puStack_3c = (undefined1 *)0x64deaa;
  FUN_00405008(&local_10,3,puVar2);
  return;
}

