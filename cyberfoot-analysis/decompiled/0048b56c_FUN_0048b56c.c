// Address: 0048b56c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0048b56c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_00403c10(param_2,PTR_PTR_0048a9f4);
  if (cVar1 != '\0') {
    if ((*(int *)(*(int *)(param_1 + 0x28) + 8) == 0) ||
       (*(int *)(*(int *)(param_2 + 0x28) + 8) == 0)) {
      uVar2 = (uint)(*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28));
    }
    else {
      uVar2 = FUN_0042cc14(param_1,param_2);
    }
  }
  return uVar2;
}

