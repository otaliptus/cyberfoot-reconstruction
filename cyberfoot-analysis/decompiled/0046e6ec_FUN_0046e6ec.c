// Address: 0046e6ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046e6ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  BOOL BVar2;
  bool bVar3;
  int local_14;
  int local_10;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    FUN_0046e454(*(undefined4 *)(param_1 + 0x6c),param_2,param_3,&local_14);
    BVar2 = ImageList_DragMove(local_14,local_10);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}

