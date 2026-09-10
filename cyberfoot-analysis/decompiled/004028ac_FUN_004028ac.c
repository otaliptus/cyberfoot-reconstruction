// Address: 004028ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004028ac(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00406fb0();
  if (*piVar1 != 0) {
    piVar1 = (int *)FUN_00406fb0();
    return *(undefined4 *)(*piVar1 + 4);
  }
  return 0;
}

