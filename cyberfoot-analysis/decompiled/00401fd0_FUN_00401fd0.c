// Address: 00401fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401fd0(void)

{
  if (0 < (int)DAT_0066c61c) {
    if ((int)DAT_0066c61c < 0xc) {
      DAT_0066c5c8 = 7;
    }
    else {
      *DAT_0066c620 = DAT_0066c61c | 2;
      FUN_00401da4(DAT_0066c620 + 1);
      DAT_0066c620 = (uint *)0x0;
      DAT_0066c61c = 0;
    }
  }
  return;
}

