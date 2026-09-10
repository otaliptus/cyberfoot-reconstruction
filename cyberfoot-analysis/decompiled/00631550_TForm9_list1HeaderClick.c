// Address: 00631550
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm9_list1HeaderClick(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x308) + 0x11c))();
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x308) + 0x194))
                  (*(int **)(param_1 + 0x308),1,iVar2,&DAT_006315a0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

