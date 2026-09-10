// Address: 0048d72c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048d72c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x28);
    *(int *)(param_1 + 0x18) = iVar2;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  puVar1[2] = &LAB_0048d680;
  puVar1[3] = FUN_0048d68c;
  puVar1[4] = FUN_0048d6fc;
  puVar1[5] = FUN_0049745c;
  puVar1[6] = &DAT_0048d728;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}

