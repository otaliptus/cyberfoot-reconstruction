// Address: 00443898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443898(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  FUN_0041f08c(param_1,param_2,param_3,param_3);
  iVar5 = *(int *)(param_1 + 0x28);
  if ((((iVar5 != 0) && (param_2 != 0)) && (*(char *)(iVar5 + 0xa0) != '\0')) &&
     ((*(char *)(iVar5 + 0xb0) == '\0' &&
      (iVar5 = *(int *)(*(int *)(iVar5 + 0x50) + 8), -1 < iVar5 + -1)))) {
    iVar6 = 0;
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x50),iVar6);
      cVar1 = FUN_00403c10(*(undefined4 *)(iVar2 + 0x20),PTR_PTR_00448cbc);
      if (cVar1 == '\0') {
        cVar1 = FUN_00403c10(*(undefined4 *)(iVar2 + 0x20),PTR_PTR_00446d98);
        if (cVar1 != '\0') {
          uVar3 = FUN_0041ea50(param_2);
          uVar3 = FUN_0044e8f4(*(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x22c),uVar3);
          FUN_0044e308(uVar3,*(undefined4 *)(param_2 + 0x10));
          FUN_0044e4c0(uVar3,0,*(undefined4 *)(param_2 + 0x18));
          FUN_0044e3b8(uVar3,*(undefined4 *)(param_2 + 0x14));
        }
      }
      else {
        iVar2 = FUN_00403c34(*(undefined4 *)(iVar2 + 0x20),PTR_PTR_00448cbc);
        uVar3 = FUN_0041ea50(param_2);
        piVar4 = (int *)FUN_00443198(*(undefined4 *)(iVar2 + 0x28c),uVar3);
        (**(code **)(*piVar4 + 0x20))(piVar4,*(undefined4 *)(param_2 + 0x10));
        (**(code **)(*piVar4 + 0x28))(piVar4,*(undefined4 *)(param_2 + 0x18));
        (**(code **)(*piVar4 + 0x24))(piVar4,*(undefined4 *)(param_2 + 0x14));
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

