// Address: 00473ad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473ad4(int param_1,HIMAGELIST param_2)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x34);
  local_c = *(int *)(param_1 + 0x30);
  ImageList_GetIconSize(param_2,&local_8,&local_c);
  *(int *)(param_1 + 0x34) = local_8;
  *(int *)(param_1 + 0x30) = local_c;
  FUN_00473a10(param_1);
  return;
}

