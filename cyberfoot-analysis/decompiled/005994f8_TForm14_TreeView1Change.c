// Address: 005994f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_TreeView1Change(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_00449a40(param_3);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if ((iVar1 < 1) || (0x14 < iVar1)) {
      if ((iVar1 < 0x16) || (0x29 < iVar1)) {
        if ((iVar1 < 0x2b) || (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 2 < iVar1)) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 4 <= iVar1) {
            iVar2 = *(int *)(DAT_006d23d8 + (iVar1 - (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 4)) * 4);
          }
        }
        else {
          iVar2 = *(int *)(DAT_006d23d4 + -0xac + iVar1 * 4);
        }
      }
      else {
        iVar2 = *(int *)(&DAT_006d228c + iVar1 * 4);
      }
    }
    else {
      iVar2 = (&DAT_006d2290)[iVar1];
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    if ((iVar1 < 1) || (10 < iVar1)) {
      if ((iVar1 < 0xc) || (0x15 < iVar1)) {
        if ((iVar1 < 0x17) || (0x20 < iVar1)) {
          if ((iVar1 < 0x22) || (0x2b < iVar1)) {
            if ((iVar1 < 0x2d) || (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 4 < iVar1)) {
              if (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 6 <= iVar1) {
                iVar2 = *(int *)(DAT_006d23d8 +
                                (iVar1 - (*(int *)(PTR_DAT_0066ac78 + 0x3c) + 6)) * 4);
              }
            }
            else {
              iVar2 = *(int *)(DAT_006d23d4 + -0xb4 + iVar1 * 4);
            }
          }
          else {
            iVar2 = *(int *)(&DAT_006d22fc + iVar1 * 4);
          }
        }
        else {
          iVar2 = *(int *)(&DAT_006d22d8 + iVar1 * 4);
        }
      }
      else {
        iVar2 = *(int *)(&DAT_006d22b4 + iVar1 * 4);
      }
    }
    else {
      iVar2 = (&DAT_006d2290)[iVar1];
    }
  }
  if (-1 < iVar2) {
    *(int *)PTR_DAT_0066b2b4 = iVar2;
    FUN_00597468(param_1);
    (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),0);
    (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
  }
  return;
}

