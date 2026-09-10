// Address: 0042e1bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e1bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  UINT cchBuffer;
  LPSTR lpDescription;
  undefined4 uVar2;
  
  FUN_004048d4(param_2);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    cchBuffer = GetEnhMetaFileDescriptionA(*(HENHMETAFILE *)(iVar1 + 8),0,(LPSTR)0x0);
    if (0 < (int)cchBuffer) {
      FUN_00404f30(param_2,cchBuffer);
      lpDescription = (LPSTR)FUN_00404da4(*param_2);
      GetEnhMetaFileDescriptionA
                (*(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8),cchBuffer,lpDescription);
      FUN_00404da4(*param_2);
      uVar2 = FUN_0040a760();
      FUN_00404f30(param_2,uVar2);
    }
  }
  return;
}

