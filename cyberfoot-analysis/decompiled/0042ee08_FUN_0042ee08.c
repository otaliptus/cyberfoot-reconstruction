// Address: 0042ee08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ee08(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    *param_2 = 0xe;
    *param_4 = 0;
    pHVar2 = CopyEnhMetaFileA(*(HENHMETAFILE *)(iVar1 + 8),(LPCSTR)0x0);
    *param_3 = pHVar2;
  }
  return;
}

