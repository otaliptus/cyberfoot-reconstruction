// Address: 0043c59c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c59c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b3ac + 0x30);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_00427fa4();
      *(undefined4 *)(param_1 + 8) = uVar2;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    BVar3 = OpenClipboard(*(HWND *)(param_1 + 8));
    if (BVar3 == 0) {
      FUN_0040e42c(PTR_DAT_00408738,1,PTR_PTR_0066ada0);
      FUN_00404250();
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

