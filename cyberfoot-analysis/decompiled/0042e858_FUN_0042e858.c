// Address: 0042e858
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e858(int *param_1,HENHMETAFILE param_2)

{
  UINT UVar1;
  int iVar2;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  
  if (param_2 != (HENHMETAFILE)0x0) {
    UVar1 = GetEnhMetaFileHeader(param_2,100,(LPENHMETAHEADER)&stack0xffffff94);
    if (UVar1 == 0) {
      FUN_0042b898();
    }
  }
  FUN_0042eaac(param_1);
  if (*(HENHMETAFILE *)(param_1[10] + 8) != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile(*(HENHMETAFILE *)(param_1[10] + 8));
  }
  FUN_00429594(*(undefined4 *)(param_1[10] + 0x14));
  iVar2 = param_1[10];
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(HENHMETAFILE *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (param_2 != (HENHMETAFILE)0x0) {
    *(int *)(iVar2 + 0xc) = local_4c - local_54;
    *(int *)(iVar2 + 0x10) = local_48 - local_50;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x22) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

