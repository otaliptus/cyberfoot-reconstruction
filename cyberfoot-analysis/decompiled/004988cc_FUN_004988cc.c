// Address: 004988cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004988cc(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[6];
  puVar3 = (undefined1 *)*piVar2;
  *piVar2 = *piVar2 + 1;
  *puVar3 = param_2;
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar4 = (*(code *)piVar2[3])(param_1);
    if (iVar4 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      (**(code **)*param_1)();
    }
  }
  return;
}

