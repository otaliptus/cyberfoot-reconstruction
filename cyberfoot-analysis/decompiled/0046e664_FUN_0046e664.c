// Address: 0046e664
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046e664(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  BOOL BVar2;
  bool bVar3;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar3 = false;
  local_8 = param_3;
  cVar1 = FUN_004739fc(param_1);
  if ((cVar1 != '\0') && (param_2 != *(int *)(param_1 + 0x6c))) {
    FUN_0046e6c8(param_1);
    *(int *)(param_1 + 0x6c) = param_2;
    FUN_0046e454(param_2,local_8,param_4,&local_10);
    BVar2 = ImageList_DragEnter(*(HWND *)(param_1 + 0x6c),local_10,local_c);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}

