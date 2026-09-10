// Address: 0049bf0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049bf0c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x59] = (int)puVar1;
  *puVar1 = &LAB_0049ba70;
  if (param_1[0x30] == 1) {
    puVar1[1] = &LAB_0049bc28;
    puVar1[2] = &LAB_0049ca5c;
  }
  else if (param_1[0x30] == 2) {
    puVar1[1] = &LAB_0049bd7c;
    puVar1[7] = &LAB_0049ccc8;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  iVar2 = 0;
  puVar1 = puVar1 + 3;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  return;
}

