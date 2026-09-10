// Address: 0042eaac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042eaac(int param_1)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_0042e494(param_1);
  }
  else if (1 < *(int *)(*(int *)(param_1 + 0x28) + 4)) {
    iVar1 = FUN_00403a54(PTR_PTR_004291d8,1);
    pHVar2 = *(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8);
    if (pHVar2 != (HENHMETAFILE)0x0) {
      pHVar2 = CopyEnhMetaFileA(pHVar2,(LPCSTR)0x0);
      *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
    }
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
    *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x20);
    FUN_0042f214(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = iVar1;
    FUN_0042f210();
  }
  return;
}

