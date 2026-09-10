// Address: 0047a040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0047a040(undefined4 param_1,undefined2 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00479fa0(param_1,param_2,0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))();
  }
  return piVar1 != (int *)0x0;
}

