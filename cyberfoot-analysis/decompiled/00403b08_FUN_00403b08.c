// Address: 00403b08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403b08(int *param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3)

{
  if ((code *)0xfeffffff < UNRECOVERED_JUMPTABLE) {
    FUN_00406898(param_3,*(undefined4 *)(((uint)UNRECOVERED_JUMPTABLE & 0xffffff) + (int)param_1));
    return;
  }
  if ((code *)0xfdffffff < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00403b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)(short)UNRECOVERED_JUMPTABLE + *param_1))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00403b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

