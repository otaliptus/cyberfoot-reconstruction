// Address: 004e1340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1340(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = (int *)param_1[0x5a];
  iVar2 = param_1[0x5c];
  if (piVar1 != (int *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x50))();
    if ((cVar3 != '\0') && ((char)iVar2 != '\0')) {
      cVar3 = FUN_004da9b4(*(undefined2 *)(param_2 + 4),param_3);
      if (cVar3 != '\0') {
        cVar3 = FUN_00403c80(piVar1);
        if (cVar3 != '\0') {
          (**(code **)(*piVar1 + 0xc4))();
          *(undefined4 *)(param_2 + 0xc) = 1;
        }
      }
    }
  }
  return;
}

