// Address: 0046ed18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046ed18(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_18 [16];
  int local_8;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x57) == '\0') {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) != 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x9c) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10);
  local_8 = param_1;
  iVar2 = FUN_0046eac8(param_1,2);
  iVar3 = FUN_0046eac8(local_8,1);
  cVar1 = FUN_0046ece8();
  if (cVar1 != '\0') {
    if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
      iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
    }
    else {
      iVar3 = iVar3 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
    }
  }
  iVar4 = FUN_0046ef68(local_8);
  if ((iVar4 == 0) &&
     (((*(int *)(local_8 + 0x14) == *(int *)(*(int *)(local_8 + 0x1c) + 100) ||
       (*(char *)(*(int *)(local_8 + 0x14) + 0x10) !=
        *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10))) ||
      (iVar4 = FUN_0046ee90(local_8), *(int *)(*(int *)(local_8 + 0x1c) + 0x68) <= iVar4)))) {
    if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) ==
        *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10)) goto LAB_0046ee3e;
    iVar4 = FUN_0046ee90(local_8);
    iVar5 = FUN_0046ee90(*(undefined4 *)(*(int *)(local_8 + 0x1c) + 100));
    if (iVar5 <= iVar4) goto LAB_0046ee3e;
  }
  if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
    iVar3 = iVar3 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
  }
  else {
    iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
  }
LAB_0046ee3e:
  puVar8 = local_18;
  uVar6 = FUN_0046ea5c(local_8,1);
  uVar7 = FUN_0046ea5c(local_8,2);
  FUN_0041c9b8(uVar7,uVar6,iVar2,puVar8,iVar3);
  (**(code **)**(undefined4 **)(local_8 + 0x1c))
            (*(undefined4 **)(local_8 + 0x1c),*(undefined4 *)(local_8 + 4),local_18);
  FUN_00465bc8(*(undefined4 *)(local_8 + 4),local_18);
  return;
}

