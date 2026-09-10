// Address: 004c43e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c43e8(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  do {
    if (param_3 == '\0') {
      return;
    }
    param_3 = param_3 + -2;
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  } while ('\0' < param_3);
  return;
}

