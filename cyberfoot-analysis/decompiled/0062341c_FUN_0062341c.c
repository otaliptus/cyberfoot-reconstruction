// Address: 0062341c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0062341c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  puStack_2c = &LAB_00623888;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar3 = 0;
  local_8 = param_1;
  FUN_0043b234(DAT_006d4918,0);
  FUN_00642c50(0x1fc,&local_14);
  FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_14);
  *(undefined4 *)PTR_DAT_0066aea4 = 2;
  iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
  if (iVar5 == 1) {
    iVar3 = 0;
  }
  else if (iVar5 == 2) {
    iVar3 = 2;
  }
  else if (iVar5 == 3) {
    iVar3 = 4;
  }
  iVar5 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar5) {
    iVar2 = 1;
    do {
      *(undefined4 *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x28) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + iVar2 * 0x1bc);
      *(undefined4 *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x24) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + iVar2 * 0x1bc);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(PTR_DAT_0066ac78 + 0x1a8) = *(int *)(PTR_DAT_0066ac78 + 0x1a8) + 1;
  DAT_006d4798 = 0;
  iVar5 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar5) {
    iVar2 = 1;
    do {
      DAT_006d47a0 = 0;
      DAT_006d47a4 = 0;
      if (*(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x24) <
          *(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x28)) {
        DAT_006d47a0 = 1;
      }
      else if (*(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x28) <
               *(int *)(PTR_DAT_0066af90 + (iVar3 + iVar2) * 0x30 + -0x24)) {
        DAT_006d47a4 = 1;
      }
      if (DAT_006d47a4 < DAT_006d47a0) {
        FUN_0062318c(local_8,iVar3 + iVar2,1);
      }
      else if (DAT_006d47a0 < DAT_006d47a4) {
        FUN_0062318c(local_8,iVar3 + iVar2,2);
      }
      else {
        FUN_00622e48(local_8,iVar3 + iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (DAT_006d4798 == 0) {
    FUN_00623220(local_8);
  }
  else {
    if (0 < DAT_006d4798) {
      piVar4 = &DAT_006d44bc;
      iVar5 = DAT_006d4798;
      do {
        iVar3 = *piVar4;
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(PTR_DAT_0066af90 + iVar3 * 0x30 + -0x30) * 0x2f8) == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(PTR_DAT_0066af90 + iVar3 * 0x30 + -0x2c) * 0x2f8) == '\0')) {
          if (PTR_DAT_0066ac78[0xda] == '\0') {
            local_c = FUN_004032c8(7);
            local_c = local_c + 3;
            local_10 = FUN_004032c8(7);
            local_10 = local_10 + 3;
            iVar3 = FUN_006233cc(local_8,*(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x30),
                                 *(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x2c));
            *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar3 * 0x1bc) = 1;
            if (local_c < local_10) {
              FUN_0062318c(local_8,*piVar4,2);
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar3 * 0x1bc) = local_10 + -1;
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar3 * 0x1bc) = local_10;
            }
            else {
              FUN_0062318c(local_8,*piVar4,1);
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar3 * 0x1bc) = local_c;
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar3 * 0x1bc) = local_c + -1;
            }
          }
          else {
            *(int *)PTR_DAT_0066ad84 = iVar3;
            *(int *)PTR_DAT_0066b648 = *piVar4;
            *(undefined4 *)PTR_DAT_0066adb0 =
                 *(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x30);
            *(undefined4 *)PTR_DAT_0066ae1c =
                 *(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x2c);
            FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
            (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
          }
        }
        else {
          *(int *)PTR_DAT_0066ad84 = iVar3;
          *(int *)PTR_DAT_0066b648 = *piVar4;
          *(undefined4 *)PTR_DAT_0066b134 = 1;
          *(undefined4 *)PTR_DAT_0066adb0 =
               *(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x30);
          *(undefined4 *)PTR_DAT_0066ae1c =
               *(undefined4 *)(PTR_DAT_0066af90 + *piVar4 * 0x30 + -0x2c);
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fc348,PTR_DAT_0066b3f4);
          (**(code **)(**(int **)PTR_DAT_0066b3f4 + 0xec))();
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00623220(local_8);
    FUN_00642c50(0x1df,&local_18);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_18);
    FUN_0043b234(DAT_006d4918,0);
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    Sleep(3000);
  }
  FUN_00623bf0(local_8);
  FUN_0060ee88(local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0062388f;
  puStack_2c = (undefined1 *)0x623887;
  FUN_00405008(&local_18,2,puVar1);
  return;
}

