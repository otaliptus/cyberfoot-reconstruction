// Address: 00476e70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476e70(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (cVar1 = FUN_00403c10(*(int *)(param_1 + 0x70),PTR_PTR_00475ac4), cVar1 != '\0')) {
    FUN_0047970c(param_1,0);
    FUN_00479c08(param_1,0);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0047a744(*(int *)(param_1 + 0x70));
  }
  FUN_0047660c(&LAB_00476e54,*(undefined4 *)(param_1 + 0x68),param_1);
  return;
}

