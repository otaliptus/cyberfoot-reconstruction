// Address: 00479fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00479fd0(int *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') && (cVar1 = FUN_00403c10(param_1,PTR_PTR_00475da8), cVar1 != '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = FUN_0047b39c(param_1);
  }
  else {
    for (iVar2 = FUN_00479fa0(param_1,param_2,param_3 == '\0');
        (iVar2 != 0 && (*(int *)(iVar2 + 0x54) == 0)); iVar2 = *(int *)(iVar2 + 100)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x54);
    }
  }
  return uVar3;
}

