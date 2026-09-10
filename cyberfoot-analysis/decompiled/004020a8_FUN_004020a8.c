// Address: 004020a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004020a8(int param_1)

{
  char cVar1;
  int local_c [2];
  
  FUN_004018fc(param_1 + 4,local_c);
  if ((local_c[0] != 0) && (cVar1 = FUN_0040201c(local_c), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

